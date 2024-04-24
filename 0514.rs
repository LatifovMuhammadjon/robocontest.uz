use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let x: u8 = iter.next().unwrap().parse().unwrap();
    let y: u8 = iter.next().unwrap().parse().unwrap();
    println!("{:.2}%", y as f32 * 100.0/x as f32);
}