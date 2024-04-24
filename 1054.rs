use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: u64 = input.trim().parse().expect("");
    if n == 1 {
        println!("-1");
    } else {
        println!("1 {n} 1");
    }
}