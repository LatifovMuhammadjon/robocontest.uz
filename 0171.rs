use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("");
    let _n: u32 = input.trim().parse().expect("");
    input = String::new();
    io::stdin().read_line(&mut input).expect("");
    let v: Vec<i32> = input.split_whitespace().
    map(|x| x.parse().expect("")).collect();
    let mut sum =0i64;
    for i in v {
        sum += i as i64;
    }
    println!("{}", sum.abs());
}