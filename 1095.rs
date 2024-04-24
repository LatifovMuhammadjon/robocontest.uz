use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let c: f64 = input.trim().parse().expect("");
    let k: f64 = c+273.15;
    let f: f64 = 1.80*c+32.0;
    println!("{:.5}\n{:.5}", k, f);
}