use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let a: i64 = iter.next().unwrap().parse().unwrap();
    let b: i64 = iter.next().unwrap().parse().unwrap();
    let bin = format!("{:b}", a%b);
    let mut counter = 0;
    for i in bin.chars() {
        if i == '1' {
            counter += 1;
        }
    }
    println!("{}", counter);
}