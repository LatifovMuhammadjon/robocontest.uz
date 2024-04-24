use std::io::stdin;
fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let n: u32 = iter.next().unwrap().parse().unwrap();
    let t: u32 = iter.next().unwrap().parse().unwrap();
    let k: u32 = iter.next().unwrap().parse().unwrap(); 
    println!("{}", if n*t <= k+n-1 {1} else {-1});
}