class Pants:
    def __init__(self, color, waist_size, length, price):
        self.color = color
        self.waist_size = waist_size
        self.length = length
        self.price = price

    def change_price(self, new_price):
        self.price = new_price
    
    def discount(self, discount):
        return self.price * (1-discount)

    
pants_one = Pants('red', 35, 36, 15.12)
pants_two = Pants('blue', 40, 38, 24.12)
pants_three = Pants('tan', 28, 30, 8.12)
    

class SalesPerson:
    def __init__(self,first_name,last_name,employee_id,salary):
        self.first_name = first_name
        self.last_name = last_name
        self.employee_id = employee_id
        self.salary = salary
    pants_sold = []
    total_sales = 0
    
    def sell_pants(self,pants):
        self.pants_sold.append(pants)

    # def display_sales(self,arr):
    #     for i in arr:
    #         print("color:",i.color,"waist_size:",i.waist_size,"length:",i.length,"price:",i.price)   

    def display_sales(self):
        for i in self.pants_sold:
            print("color: {color}, waist_size: {waist_size}, length: {length}, price: {price}".format(color = i.color, waist_size = i.waist_size, length = i.length,price =i.price ))   

    def calculate_sales(self):
        for i in self.pants_sold:
            self.total_sales += i.price
        return round(self.total_sales,2)

    def calculate_commission(self,commission):
        return round(commission * self.total_sales,2)

salesperson = SalesPerson('Amy', 'Gonzalez', 2581923, 40000)
salesperson.sell_pants(pants_one)
salesperson.sell_pants(pants_two)
salesperson.sell_pants(pants_three)


salesperson.display_sales()
print(salesperson.calculate_sales())
