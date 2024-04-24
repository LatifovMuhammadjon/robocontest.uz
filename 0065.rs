use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let l = iter.next().unwrap();
    let r = iter.next().unwrap();
    println!("{}", if l == r { l } else { "1" });
}