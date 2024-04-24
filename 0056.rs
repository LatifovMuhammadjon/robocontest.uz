use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to input");
    const t: u16 = input.trim().parse().expect("Failed to parse number");
    let mut i: u16 = 0;
    let mut maks: u16 = 0;
    let mut a: [u16; t];
    while i<t {
        io::stdin().read_line(&mut input).expect("Failed to input");
        let n: u16 = input.trim().parse().expect("Failed to parse number");
        if maks < n{
            maks = n;
        }
        a[i] = n;
        i+=1;
    }
}