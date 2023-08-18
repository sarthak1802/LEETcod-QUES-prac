# Average Selling Price
# Write your MySQL query statement below
select u.product_id, round(sum(p.price*u.units)/sum(u.units), 2) as average_price
from UnitsSold u
join Prices p 
on p.product_id = u.product_id
and u.purchase_date between p.start_date and p.end_date
group by product_id
