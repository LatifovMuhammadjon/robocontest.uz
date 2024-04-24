use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let v: Vec<i64> = input.split_whitespace().map(|x| x.parse().expect("")).collect();
    println!("{}", ((v[0]-v[1]).abs()+1)*10);
}