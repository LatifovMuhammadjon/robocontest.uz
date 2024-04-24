use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut s = 0u64;
    for i in input.trim().chars() {
        s *= 26;
        s += i as u64 - 'A' as u64 + 1;
    }
    println!("{}", s);
}