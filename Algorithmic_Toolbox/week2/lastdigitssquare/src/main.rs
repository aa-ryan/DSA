fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("Value not found");

    let n: usize = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    let less_n = n % 60;
    let less_np = (n+1) % 60;

    let mut a = 0;
    let mut b = 0;
    if less_n <= 1 {
        a = less_n;
    } else {
        a = fibo(less_n);
    }

    if less_np <= 1 {
        b = less_np;
    } else { 
        b = fibo(less_np);
    }

    println!("{}", (a*b)%10);
}
fn fibo(n: usize) -> usize {
    let mut a = 0;
    let mut b = 1;
    let mut c = 0;

    for _ in 2..n+1 {
        c = a+b;
        c = c % 10;

        let temp = b;
        b = c;
        a = temp;
    }

    c
}