use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let n: u64 = iter.next().unwrap().parse().unwrap();
    let a: u64 = iter.next().unwrap().parse().unwrap();
    let b: u64 = iter.next().unwrap().parse().unwrap();
    let result: f64 = n as f64*(100-a) as f64/(100-b) as f64;
    println!("{:.5}", result);
}