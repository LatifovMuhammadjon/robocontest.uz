use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut n: u64 = input.trim().parse().unwrap();
    let mut i = 1u64;
    while i*10<n {
        i*=10;
    }
    while i!=0 {
        if n/i%10 < 9 {
            n = n/i/10*i*10 +9*i+ n%i;
            break;
        }
        i/=10;
    }
    println!("{}", n);
}