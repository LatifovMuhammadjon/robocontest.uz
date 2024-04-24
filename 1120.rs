use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: u64 = input.trim().parse().expect("");
    println!("{}", n/2);
}