use std::io::stdin;

macro_rules! swap {
    ($a:expr, $b:expr) => {
        let t = $a;
        $a = $b;
        $b = t;
    };
}

fn count_max_candies(n: usize, board: &Vec<Vec<char>>) -> usize {
    let mut max_count = 0;

    for i in 0..n {
        let mut row_count = 1;
        let mut col_count = 1;

        for j in 1..n {
            if board[i][j] == board[i][j - 1] {
                row_count += 1;
            } else {
                max_count = max_count.max(row_count);
                row_count = 1;
            }

            if board[j][i] == board[j - 1][i] {
                col_count += 1;
            } else {
                max_count = max_count.max(col_count);
                col_count = 1;
            }
        }
        max_count = max_count.max(row_count);
        max_count = max_count.max(col_count);
    }
    max_count
}

fn candy(n: usize, board: &mut Vec<Vec<char>>) -> usize {
    let mut max_count = count_max_candies(n, board);

    for row in 0..n {
        for col in 0..n {
            if col + 1 < n && board[row][col] != board[row][col + 1] {
                swap!(board[row][col], board[row][col + 1]);
                max_count = max_count.max(count_max_candies(n, board));
                swap!(board[row][col], board[row][col + 1]);
            }
            if row + 1 < n && board[row][col] != board[row + 1][col] {
                swap!(board[row][col], board[row + 1][col]);
                max_count = max_count.max(count_max_candies(n, board));
                swap!(board[row][col], board[row + 1][col]);
            }
        }
    }
    max_count
}

fn main() {
    let n: usize = stdin().lines().next().unwrap().unwrap().parse().unwrap();

    let mut board: Vec<Vec<char>> = stdin()
        .lines()
        .take(n)
        .map(|line| line.unwrap().trim().chars().collect())
        .collect();

    println!("{}", candy(n, &mut board));
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sample1() {
        let mut input: Vec<Vec<char>> = vec![
            vec!['C', 'C', 'P'],
            vec!['C', 'C', 'P'],
            vec!['P', 'P', 'C'],
        ];
        assert_eq!(candy(3, &mut input), 3);
    }

    #[test]
    fn sample2() {
        let mut input: Vec<Vec<char>> = vec![
            vec!['P', 'P', 'P', 'P'],
            vec!['C', 'Y', 'Z', 'Y'],
            vec!['C', 'C', 'P', 'Y'],
            vec!['P', 'P', 'C', 'C'],
        ];
        assert_eq!(candy(4, &mut input), 4);
    }

    #[test]
    fn sample3() {
        let mut input: Vec<Vec<char>> = vec![
            vec!['Y', 'C', 'P', 'Z', 'Y'],
            vec!['C', 'Y', 'Z', 'Z', 'P'],
            vec!['C', 'C', 'P', 'P', 'P'],
            vec!['Y', 'C', 'Y', 'Z', 'C'],
            vec!['C', 'P', 'P', 'Z', 'Z'],
        ];
        assert_eq!(candy(5, &mut input), 4);
    }
}
