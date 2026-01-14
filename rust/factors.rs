fn main() {
    let mut factors: Vec<i32> = Vec::new();
    let number: i32 = 64;

    let limit = (number as f64).sqrt() as i32;

    for i in 1..=limit {
        if number % i == 0 {
            factors.push(i);
            if i != number / i {
                factors.push(number / i);
            }
        }
    }

    factors.sort();

    for i in factors {
        print!("{} ", i);
    }
}
