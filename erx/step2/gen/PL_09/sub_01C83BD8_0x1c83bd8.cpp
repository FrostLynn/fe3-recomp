#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C83BD8
// Address: 0x1c83bd8 - 0x1c83cb8
void sub_01C83BD8_0x1c83bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83BD8_0x1c83bd8");
#endif

    switch (ctx->pc) {
        case 0x1c83c0cu: goto label_1c83c0c;
        case 0x1c83c24u: goto label_1c83c24;
        case 0x1c83c34u: goto label_1c83c34;
        default: break;
    }

    ctx->pc = 0x1c83bd8u;

    // 0x1c83bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c83bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c83bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c83bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83be0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c83be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c83be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c83be8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c83be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c83becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c83bf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c83bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c83bf4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c83bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83bf8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c83bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83bfc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c83bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83c00: 0x139980  sll         $s3, $s3, 6
    ctx->pc = 0x1c83c00u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1c83c04: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83C04u;
    SET_GPR_U32(ctx, 31, 0x1C83C0Cu);
    ctx->pc = 0x1C83C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83C04u;
    // 0x1c83c08: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83C04u, 0x1C83C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83C0Cu;
label_1c83c0c:
    // 0x1c83c0c: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c83c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c83c10: 0x26240620  addiu       $a0, $s1, 0x620
    ctx->pc = 0x1c83c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    // 0x1c83c14: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x1c83c14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c83c18: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1c83c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c83c1c: 0xc7203c6  jal         func_1C80F18
    ctx->pc = 0x1C83C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C83C24u);
    ctx->pc = 0x1C83C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83C1Cu;
    // 0x1c83c20: 0x24a56140  addiu       $a1, $a1, 0x6140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F18u, 0x1C83C1Cu, 0x1C83C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83C24u;
label_1c83c24:
    // 0x1c83c24: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c83c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c83c28: 0x26240630  addiu       $a0, $s1, 0x630
    ctx->pc = 0x1c83c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1c83c2c: 0xc7203c6  jal         func_1C80F18
    ctx->pc = 0x1C83C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C83C34u);
    ctx->pc = 0x1C83C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83C2Cu;
    // 0x1c83c30: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F18u, 0x1C83C2Cu, 0x1C83C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83C34u;
label_1c83c34:
    // 0x1c83c34: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c83c34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c83c38: 0x8e0f00b0  lw          $t7, 0xB0($s0)
    ctx->pc = 0x1c83c38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1c83c3c: 0x24e9018  mult        $s2, $s2, $t6
    ctx->pc = 0x1c83c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1c83c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c83c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c83c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83c48: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x1c83c48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1c83c4c: 0x25ef0014  addiu       $t7, $t7, 0x14
    ctx->pc = 0x1c83c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
    // 0x1c83c50: 0xe780a  movz        $t7, $zero, $t6
    ctx->pc = 0x1c83c50u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x1c83c54: 0x8ded0014  lw          $t5, 0x14($t7)
    ctx->pc = 0x1c83c54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x1c83c58: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1c83c58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1c83c5c: 0x1b26821  addu        $t5, $t5, $s2
    ctx->pc = 0x1c83c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
    // 0x1c83c60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c83c60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83c64: 0xae2d0644  sw          $t5, 0x644($s1)
    ctx->pc = 0x1c83c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 13));
    // 0x1c83c68: 0xae2f0654  sw          $t7, 0x654($s1)
    ctx->pc = 0x1c83c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 15));
    // 0x1c83c6c: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x1c83c6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x1c83c70: 0xae2e0640  sw          $t6, 0x640($s1)
    ctx->pc = 0x1c83c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 14));
    // 0x1c83c74: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83c74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83c78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c83c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83c7c: 0x25efcec4  addiu       $t7, $t7, -0x313C
    ctx->pc = 0x1c83c7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954692));
    // 0x1c83c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c83c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c83c84: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83c84u;
    { uint32_t bits = FAST_READ32(0x1C8CEC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83c88: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83c88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83c8c: 0xe6200648  swc1        $f0, 0x648($s1)
    ctx->pc = 0x1c83c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    // 0x1c83c90: 0x25efcec8  addiu       $t7, $t7, -0x3138
    ctx->pc = 0x1c83c90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954696));
    // 0x1c83c94: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c83c94u;
    { uint32_t bits = FAST_READ32(0x1C8CEC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c83c98: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83c98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83c9c: 0xe621064c  swc1        $f1, 0x64C($s1)
    ctx->pc = 0x1c83c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1612), bits); }
    // 0x1c83ca0: 0x25efcecc  addiu       $t7, $t7, -0x3134
    ctx->pc = 0x1c83ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954700));
    // 0x1c83ca4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83ca4u;
    { uint32_t bits = FAST_READ32(0x1C8CECCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83ca8: 0xe6200650  swc1        $f0, 0x650($s1)
    ctx->pc = 0x1c83ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1616), bits); }
    // 0x1c83cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83CB0u;
        // 0x1c83cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83CB8u;
}
