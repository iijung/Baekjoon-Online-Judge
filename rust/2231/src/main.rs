use std::io::stdin;

fn digit_generator(n: u32) -> u32 {
    for m in 1..n {
        let sum: u32 = m.to_string().chars().map(|c| c.to_digit(10).unwrap()).sum();
        if sum + m == n {
            return m;
        }
    }
    0
}

fn main() {
    let n: u32 = stdin()
        .lines()
        .next()
        .unwrap()
        .unwrap()
        .trim()
        .parse()
        .unwrap();

    println!("{}", digit_generator(n));
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sample1() {
        assert_eq!(digit_generator(216), 198);
    }
}
