use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let a: u64 = input.trim().parse().unwrap();
    input = String::new();
    stdin().read_line(&mut input).unwrap();
    let b: u64 = input.trim().parse().unwrap();
    println!("{}", a&b);
}