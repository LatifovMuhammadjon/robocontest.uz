use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: u64 = input.trim().parse().expect("");
    let mut s = format!("{n:b}");
    let l = s.len();
    let mut i: u64 = n - l as u64;
    while i < n {
        s = format!("{i:b}");
        let mut counter: u8 = 0;
        for i in s.chars() {
            counter += (i == '1') as u8;
        }
        if i + (counter as u64) == n {
            println!("{}", i);
            return;
        }
        i += 1;
    }
    println!("-1");
}