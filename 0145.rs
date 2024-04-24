use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let n = input.trim().parse().unwrap();
    input = String::new();
    stdin().read_line(&mut input).unwrap();
    let v: Vec<u32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    for i in 0..n {
            
    }
}