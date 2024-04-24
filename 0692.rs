use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let n: u64 = input.trim().parse().unwrap();
    let mut i = 0u64;
    while i*(i+1)/2 < n {
        i+=1;
    }
    println!("{}", n-i*(i-1)/2);
}