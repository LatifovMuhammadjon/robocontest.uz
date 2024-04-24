use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to input");
    let a: u8 = input.trim().parse().expect("Failed to parse number");
    input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to input");
    let b: u16 = input.trim().parse().expect("Failed to parse number");
    println!("{}", (a as u16+b)%24);
}