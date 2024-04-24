use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let mut n: u8 = iter.next().unwrap().parse().unwrap();
    let k: u8 = iter.next().unwrap().parse().unwrap();
    let mut s = 0u8;
    while n>0 {
        s += n%k;
        n /= k;
    }
    print!("{s}");
}