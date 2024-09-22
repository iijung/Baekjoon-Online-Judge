use std::io::stdin;

fn find_dwarfs(heights: Vec<i32>) -> Vec<i32> {
    let diff = heights.iter().sum::<i32>() - 100;
    let mut heights = heights.to_vec();

    'outer: for i in 0..heights.len() {
        for j in (i + 1)..heights.len() {
            if heights[i] + heights[j] == diff {
                heights.remove(j);
                heights.remove(i);
                break 'outer;
            }
        }
    }
    heights.sort();
    heights
}

fn main() {
    let heights: Vec<i32> = stdin()
        .lines()
        .take(9)
        .map(|line| line.unwrap().trim().parse().unwrap())
        .collect::<Vec<i32>>();

    for dwarf in find_dwarfs(heights) {
        println!("{dwarf}");
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sample1() {
        let input: Vec<i32> = vec![20, 7, 23, 19, 10, 15, 25, 8, 13];
        let expect: Vec<i32> = vec![7, 8, 10, 13, 19, 20, 23];

        assert_eq!(find_dwarfs(input), expect);
    }
}
