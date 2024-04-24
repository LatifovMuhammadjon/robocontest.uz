use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let n: u64 = iter.next().unwrap().parse().unwrap();
    let k: u64 = iter.next().unwrap().parse().unwrap();
    let mut s = 1u64;
    for _ in 1..n {
        s *= n;
        s += k;
    }
    println!("{}", s);
}
