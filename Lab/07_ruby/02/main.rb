require_relative 'generic'
require_relative 'sport'
require_relative 'sedan'

generic_car = Car.new
sports_car = SportsCar.new
sedan_car = SedanCar.new

puts generic_car.describe
puts sports_car.describe
puts sedan_car.describe