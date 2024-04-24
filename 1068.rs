use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let first_name = iter.next().unwrap();
    let last_name = iter.next().unwrap();
    if last_name.chars().last() == Some('v') {
        println!("{} {}", first_name, last_name);
    } else {
        println!("{} {}", last_name, first_name);
    }
}