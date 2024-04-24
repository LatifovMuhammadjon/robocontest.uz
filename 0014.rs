use std::io::stdin;
fn binpow(a: u32, n: u32) -> u32 {
    if n==0 {
        return 1;
    } 
    if n%2 == 0 {
        let x: u32 = binpow(a, n/2);
        return (x as u64 * x as u64 % 1_000_000_007) as u32;
    }
    (a as u64 * binpow(a, n-1) as u64 % 1_000_000_007) as u32
}

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let n: u32 = iter.next().unwrap().parse().unwrap();
    let k: u32 = iter.next().unwrap().parse().unwrap(); 
    println!("{}", binpow(k+1, n-1));
}