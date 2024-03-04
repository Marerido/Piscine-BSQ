# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_generator.pl                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 14:35:45 by tunglaub          #+#    #+#              #
#    Updated: 2024/03/04 14:37:00 by tunglaub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
	for (my $i = 0; $i < $y; $i++) {
		for (my $j = 0; $j < $x; $j++) {
			if (int(rand($y) * 2) < $density) {
				print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
