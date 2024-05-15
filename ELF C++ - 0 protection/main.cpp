int main(int argc, char* argv[]) {
    char cVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *in_stack_00000008;
    char *var_30h;
    char *var_2ch;
    int32_t var_28h;
    char *var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h = &argc;


    if (argc < 2) {

        uVar3 = *in_stack_00000008;
        std::cout << "usage : " << uVar3 << " password" << std::endl;
        uVar3 = 5;
    } else {
        var_14h = data.08048dc4
        var_18h = data.08048dcc

        plouf((int32_t)&var_1ch, (char *)&var_18h, (int32_t)&var_14h); // plouf(std::string, std::string) / return value in var_1ch
        
        basic_string_char__std::char_traits_char___std::allocator_char___._basic_string(&var_18h);
        allocator_char_._allocator((int32_t)&var_20h + 2);
        basic_string_char__std::char_traits_char___std::allocator_char___._basic_string(&var_14h);
        allocator_char_._allocator((int32_t)&var_20h + 3);
        
        cVar1 = method.bool_std.operator___char__std::char_traits_char___std::allocator_char____std::basic_string_char__std::char_traits_char___std::allocator_char____const___char_const
                ((int32_t)&var_1ch, in_stack_00000008[1]);
        
        if (cVar1 == '\0') {

            uVar3 = "Password incorrect."
            std::cout << uVar3 << std::endl;
        } else {

            uVar3 = "Bravo, tu peux valider en utilisant ce mot de passe..."
            std::cout << uVar3 << std::endl;
            uVar3 = "Congratz. You can validate with this password..."
            std::cout << uVar3 << std::endl;
        }
        uVar3 = 0;
        basic_string_char__std::char_traits_char___std::allocator_char___._basic_string(&var_1ch);
    }
    
    return uVar3;
}


int32_t plouf(int32_t arg_4h, char *arg_8h, int32_t arg_ch) {
    uint8_t uVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint32_t uVar4;
    char *pcVar5;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_21h;
    
    // plouf(std::string, std::string)
    method.std::allocator_char_.allocator(&var_21h);
    method.std::basic_string_char__std::char_traits_char___std::allocator_char___.basic_string_char_const___std::allocator_char__const
              (arg_4h, data.08048db0, &var_21h);
    method.std::allocator_char_._allocator(&var_21h);
    stack0xffffffe0 = 0;
    while( true ) {
        pcVar5 = (char *)method.std::string.operator___unsigned_int(arg_8h, stack0xffffffe0);
        if (*pcVar5 == '\0') break;
        puVar3 = (uint8_t *)method.std::string.operator___unsigned_int(arg_8h, stack0xffffffe0);
        uVar2 = stack0xffffffe0;
        uVar1 = *puVar3;
        uVar4 = method.std::string.length___const(arg_ch);
        puVar3 = (uint8_t *)method.std::string.operator___unsigned_int(arg_ch, uVar2 % uVar4);
        method.std::string.operator___char(arg_4h, (int32_t)(char)(*puVar3 ^ uVar1));
        unique0x00003f80 = stack0xffffffe0 + 1;
    }
    return arg_4h;
}
