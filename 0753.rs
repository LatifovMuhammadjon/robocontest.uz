use std::io::stdin;


fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let v: Vec<f64> = input.split_whitespace().map(|x| x.parse().expect("")).collect();
    let x = v[0];
    let y = v[1];
    let f = (1.0/(x+2.0/f64::powf(x,2.0)+3.0/f64::powf(x,3.0)) + f64::exp(x*(x+3.0)))/(f64::atan(x+y)+f64::powf(5.0+x,2.0)) - f64::powf(f64::cos(f64::powf(y,2.0)+f64::powf(x,2.0)/2.0),2.0);
    println!("{:.2}", f);
}