use std::io::stdin;

fn generate_traiangular_number(limits: i32) -> Vec<i32> {
    let mut traiangular_number = vec![];

    let max_n = ((2 * limits) as f32).sqrt().ceil() as i32;
    for n in 1..max_n {
        traiangular_number.push(n * (n + 1) / 2);
    }
    traiangular_number
}

fn generate_eureka_number(limits: i32) -> Vec<i32> {
    let traiangular_number = generate_traiangular_number(limits);
    let mut eureka_number = vec![];

    for t1 in &traiangular_number {
        for t2 in &traiangular_number {
            for t3 in &traiangular_number {
                let k = t1 + t2 + t3;
                if !eureka_number.contains(&k) {
                    eureka_number.push(k);
                }
            }
        }
    }
    eureka_number
}

fn main() {
    let t: i32 = stdin().lines().next().unwrap().unwrap().parse().unwrap();

    let eureka_number = generate_eureka_number(1000);

    for _ in 0..t {
        let k = stdin().lines().next().unwrap().unwrap().parse().unwrap();
        println!("{}", if eureka_number.contains(&k) { 1 } else { 0 });
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sample1() {
        let eureka_number = generate_eureka_number(1000);
        assert!(eureka_number.contains(&10));
        assert!(!eureka_number.contains(&20));
        assert!(eureka_number.contains(&1000));
    }

    #[test]
    fn not_eureka_number() {
        let eureka_number = generate_eureka_number(1000);
        assert!(!eureka_number.contains(&4));
        assert!(!eureka_number.contains(&6));
        assert!(!eureka_number.contains(&11));
        assert!(!eureka_number.contains(&20));
        assert!(!eureka_number.contains(&29));
    }
}
