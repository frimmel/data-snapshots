function data_snapshots ($) {

    $('document').ready(function() {

        $('#dss-yearslider').slider({
            'min' : 2000,
            'max' : 2013,
            'change' : function(event, ui) {
                var new_year = $(this).slider('value');
                console.log('Year changed to: ' + new_year);
            },
            'slide' : function(event, ui) {
                var new_year = $(this).slider('value');
                console.log('Year slid to: ' + new_year);
            }
        });

        $('#dss-timeslider').slider({
            'min' : 0,
            'max' : 100,
            'change' : function(event, ui) {
                var new_time = $(this).slider('value');
                console.log('Time changed to: ' + new_time);
            },
            'slide' : function(event, ui) {
                var new_time = $(this).slider('value');
                console.log('Time slid to: ' + new_time);
            }
        });

    });

}
