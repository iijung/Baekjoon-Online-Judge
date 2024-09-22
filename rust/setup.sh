#!/bin/bash

if ! command -v jq &> /dev/null ; then
  echo "Error: 'jq' is not installed. Run 'sudo apt install jq'"
  exit 1
fi

if [ ! $# -eq 1 ]; then
    echo "Usage: $0 <problem_id>"
    exit 1
fi

content=$(curl \
  --silent \
  --request GET \
  --url "https://solved.ac/api/v3/problem/show?problemId=$1" \
  --header 'Accept: application/json' \
  --header 'x-solvedac-language: ko'
)

if [ "$content" == "Not Found" ]; then
  echo "Error: https://www.acmicpc.net/problem/$1 not found"
  exit 1
fi

problem_title=$(echo "$content" | jq -r '.titleKo')
problem_tags=$(echo "$content" | jq -r '.tags[] | "- \(.displayNames[] | select(.language == "ko") | .name)(\(.key))"')

mkdir -p $1
cd $1

cat <<EOF > README.md
# [$problem_title](https://www.acmicpc.net/problem/$1)

## 알고리즘 분류
$problem_tags
EOF

cargo init --name boj &> /dev/null
