fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("Value not found");
    let n: u64= match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    println!("{}",fibo_sum_fast(n));
}


fn period (m:u64) -> u64{
    let mut a =0;
    let mut b =1;
    let mut c = a+b;
    let mut ret = 0;

    for i in 0..m*m {
        c = (a+b) % m;
        a = b;
        b = c;

    if a==0 && b==1 {
        ret = i+1;
        break;
    }
    }

    ret
}


fn solve(n:u64, m:u64) -> u64{
    let remainder = n % period(m);
    let mut first = 0;
    let mut second = 1;

    let mut res = remainder;

    for i in 1..remainder {
        res = (first + second ) % m;
        first = second;
        second = res;
    }

    res % m
}

fn fibo_sum_fast (n:u64) -> u64{
    let last_np2 = solve(n+2, 10);
    let last_2 = solve(2, 10);

    if last_np2 >= last_2 {
        return last_np2 - last_2;
    } else {
        return (10 + last_np2) - last_2;
    }
}