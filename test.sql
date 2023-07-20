create database fruit;
use fruit;

drop table fruitType;
create table fruitType(
    color int,
    weight int,
    sweet int
);

insert into fruitType values(3,4,1);
insert into fruitType values(2,3,1);
insert into fruitType values(1,3,0);
insert into fruitType values(3,2,0);
insert into fruitType values(1,4,0);

select * from fruitType;
select case 
    when color = 1
    then 'green'
    when color = 2 
    then 'yellow' 
    when color = 3
    then 'red' end as color,
    case when weight = 1
    then 'feather'
    when weight = 2
    then 'light'
    when weight = 3
    then 'light heavy'
    when weight = 4
    then 'heavy' end as weight,
    case when sweet = 1
    then 'sweet'
    when sweet = 0
    then 'not sweet' end as sweet
    from fruitType;

create view ClassPrior as
SELECT sweet, COUNT(1) as pfreq, SUM(1.0)/(SELECT COUNT(1) FROM fruitType) as pprob
FROM fruitType GROUP BY sweet;

select * from ClassPrior;

create view AttrClass as
select attributes, value, p.sweet, acfreq, acfreq/pfreq acprob
from 
(SELECT 'Color' as attributes, case when color = 1 then 'Green' when color = 2 then 'Yellow' when color = 3 then 'red' end as value, sweet, SUM(1.0) as acfreq
FROM fruitType GROUP BY color,sweet
UNION ALL
SELECT 'Weight' as attributes, case when weight = 1 then 'feather'  when weight = 2 then 'light'  when weight = 3 then 'light heavy'  when weight = 4 then 'heavy' end as value,sweet, SUM(1.0)
FROM fruitType GROUP BY weight,sweet) as rd
JOIN ClassPrior as p ON rd.sweet=p.sweet;

select * from AttrClass;