use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let n: u32 = input.trim().parse().unwrap();
    stdin().read_line(&mut input).unwrap();
    println!("{}", n + 1);
}