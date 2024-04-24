use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: u16 = input.trim().parse().unwrap();
    for _ in 0..t {
        input = String::new();
        stdin().read_line(&mut input).unwrap();
        let n: u16 = input.trim().parse().unwrap();
        println!("{}", (n+1)%2);
    }
}