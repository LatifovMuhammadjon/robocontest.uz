use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let mut n: u64 = iter.next().unwrap().parse().unwrap();
    let mut m: u64 = iter.next().unwrap().parse().unwrap();
    while m!= 0 {
        let temp = m;
        m = n%m;
        n = temp;
    }
    let mut p = 1u64;
    for i in 2..=n {
        let mut counter=1u64;
        while n%i == 0 {
            counter+=1;
            n/=i;
        }
        p *= counter;
    }
    println!("{}", p)
}