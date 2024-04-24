use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: u8 = input.trim().parse().unwrap();
    for _ in 0..t {
        input = String::new();
        stdin().read_line(&mut input).unwrap();
        let n: u32 = input.trim().parse().unwrap();
        let b = format!("{:b}", n);
        let mut counter = 0;
        for i in b.chars() {
            if i == '1' {counter += 1}
        }
        println!("{counter}");
    }
}