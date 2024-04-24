use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let mut counter = 0u32;
    for i in input.chars() {
        counter += (i=='1') as u32;
    }
    println!("{}", if counter % 2 == 1 {"YES"} else {"NO"});
}
n*(n-1)+4
2*(n-1)