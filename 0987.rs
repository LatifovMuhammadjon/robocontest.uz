use std::io::stdin;
use std::cmp::min;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let a: u32 = iter.next().unwrap().parse().unwrap();
    let b: u32 = iter.next().unwrap().parse().unwrap();
    let m: u64 = min(a,b) as u64;
    let mut p = 1u64;
    for i in 1..=m {
        p *= i;
    }
    println!("{}", p);
}
x = y + n
x = ky
y = n/(k-1)
