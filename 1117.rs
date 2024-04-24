use std::io::stdin;
use std::cmp::max;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let a: u8 = iter.next().unwrap().parse().unwrap();
    let b: u8 = iter.next().unwrap().parse().unwrap();
    let c: u8 = iter.next().unwrap().parse().unwrap();
    println!("{}", max(c-b-1,b-a-1));
}