#######################
## Name     : scarf.rb
## Author   : izder456
## License  : N/A
## Version  : v1.0.1
## Language : Ruby
#######################

#get input
print "Enter Character 1 : "
colour1 = gets.not_nil!.chomp
print "Enter Character 2 : "
colour2 = gets.not_nil!.chomp
print "Enter desired character length (Whole Number) : "
colour_length = gets.not_nil!.chomp.to_i
print "Enter desired scarf length (Whole Number) : "
pattern_length = gets.not_nil!.chomp.to_i
print "Enter desired scarf width (Whole Number) : "
pattern_width = gets.not_nil!.chomp.to_i

#combine to array
colours = [colour1, colour2]

#print scarf
puts ""
puts "Here is your scarf :"
pos = 0
until pos == pattern_width * pattern_length
  print colours[((pos / colour_length) % colours.size).to_i]
  if (pos % pattern_width) == (pattern_width - 1)
    puts ""
  end
  pos += 1
end