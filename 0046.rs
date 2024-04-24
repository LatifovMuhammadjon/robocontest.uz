use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let n: usize = input.trim().parse().expect("");
    let mut a: Vec<bool> = vec![false, false];
    let mut i = 1usize;
    let mut v: Vec<bool>;
    let mut counter = 0u64;
    while i < n {
        v = vec![false];
        for j in 0..i {
            counter += (!(a[j]^a[j+1])) as u64;
            v.push(!(a[j]^a[j+1]));
        }
        v.push(false);
        a = v.clone();
        i += 1;
    }
    println!("{}", counter);
}