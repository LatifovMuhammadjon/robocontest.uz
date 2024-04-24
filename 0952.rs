use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: u64 = input.trim().parse().expect("");
    let mut p = 1u64;
    if n<4 {
        for i in 1..=n {
            p *= i;
        }
    } else {
        for i in 0..3 {
            p = (n-i)%1_000_000_007*p%1_000_000_007;
            println!("{}", p);
        }
        
    }
    println!("{}", p);
}