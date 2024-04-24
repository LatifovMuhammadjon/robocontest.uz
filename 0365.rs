use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let n: u32 = input.trim().parse().unwrap();
    if n%4!=3 {
        println!("-1");
        return;
    } else {
        let k = (n+1)/4;
        let mut s = 0.0f64;
        for i in 0..k {
            s += ((i*4+3) as f64).sqrt() - ((i*4+1) as f64).sqrt(); 
        }
        println!("{}", (s/2.0) as u32);
    }
}