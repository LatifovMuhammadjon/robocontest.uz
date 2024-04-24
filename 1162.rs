use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: u8 = input.trim().parse().expect("");
    println!("{}", (n/2+1) as u16*(n-n/2+1) as u16);
}