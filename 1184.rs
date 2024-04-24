use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let a: i16 = input.trim().parse().expect("");
    input = String::new();
    stdin().read_line(&mut input).expect("");
    let b: i16 = input.trim().parse().expect("");
    println!("{}", (a-b).abs()+1);
}