use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let a: u16 = iter.next().unwrap().trim().parse().unwrap();
    let b: u16 = iter.next().unwrap().trim().parse().unwrap();
    let operator = iter.next().unwrap();
    match operator {
        "*" => println!("1 {}", a as u32 * b as u32),
        "+" => println!("1 {}", a+b-1),
        "/" => println!("{} {}", 2*a, 2*b),
        "-" => println!("{} {}", a+1, b+1),
        &_ => todo!()
    }
}