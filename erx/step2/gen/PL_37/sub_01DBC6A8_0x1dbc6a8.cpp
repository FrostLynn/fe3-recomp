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

// Function: sub_01DBC6A8
// Address: 0x1dbc6a8 - 0x1dbc768
void sub_01DBC6A8_0x1dbc6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBC6A8_0x1dbc6a8");
#endif

    switch (ctx->pc) {
        case 0x1dbc6ccu: goto label_1dbc6cc;
        default: break;
    }

    ctx->pc = 0x1dbc6a8u;

    // 0x1dbc6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc6ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbc6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbc6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbc6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbc6b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbc6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc6bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dbc6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc6c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbc6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbc6c4: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC6C4u;
    SET_GPR_U32(ctx, 31, 0x1DBC6CCu);
    ctx->pc = 0x1DBC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC6C4u;
    // 0x1dbc6c8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC6C4u, 0x1DBC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC6CCu;
label_1dbc6cc:
    // 0x1dbc6cc: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1dbc6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbc6d0: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1dbc6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1dbc6d4: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1dbc6d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dbc6d8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1dbc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dbc6dc: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1dbc6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1dbc6e0: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1dbc6e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbc6e4: 0x8c4b00b0  lw          $t3, 0xB0($v0)
    ctx->pc = 0x1dbc6e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1dbc6e8: 0xae2d0400  sw          $t5, 0x400($s1)
    ctx->pc = 0x1dbc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 13));
    // 0x1dbc6ec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1dbc6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc6f0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1dbc6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1dbc6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbc6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc6f8: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1dbc6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1dbc6fc: 0xe62003fc  swc1        $f0, 0x3FC($s1)
    ctx->pc = 0x1dbc6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1020), bits); }
    // 0x1dbc700: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1dbc700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1dbc704: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x1dbc704u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1dbc708: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1dbc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc70c: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1dbc70cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1dbc710: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1dbc710u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1dbc714: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x1dbc714u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbc718: 0xae2f040c  sw          $t7, 0x40C($s1)
    ctx->pc = 0x1dbc718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 15));
    // 0x1dbc71c: 0xae2d03f8  sw          $t5, 0x3F8($s1)
    ctx->pc = 0x1dbc71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 13));
    // 0x1dbc720: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x1dbc720u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1dbc724: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1dbc724u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dbc728: 0xae2e0410  sw          $t6, 0x410($s1)
    ctx->pc = 0x1dbc728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 14));
    // 0x1dbc72c: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1dbc72cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1dbc730: 0xae2c0404  sw          $t4, 0x404($s1)
    ctx->pc = 0x1dbc730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 12));
    // 0x1dbc734: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1dbc734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dbc738: 0xae2f03f0  sw          $t7, 0x3F0($s1)
    ctx->pc = 0x1dbc738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 15));
    // 0x1dbc73c: 0xae2e0414  sw          $t6, 0x414($s1)
    ctx->pc = 0x1dbc73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 14));
    // 0x1dbc740: 0xe6200408  swc1        $f0, 0x408($s1)
    ctx->pc = 0x1dbc740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
    // 0x1dbc744: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1dbc744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1dbc748: 0xae2b03f4  sw          $t3, 0x3F4($s1)
    ctx->pc = 0x1dbc748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 11));
    // 0x1dbc74c: 0xae2e0418  sw          $t6, 0x418($s1)
    ctx->pc = 0x1dbc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 14));
    // 0x1dbc750: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1dbc750u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1dbc754: 0xae2f041c  sw          $t7, 0x41C($s1)
    ctx->pc = 0x1dbc754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 15));
    // 0x1dbc758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc760: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC760u;
        // 0x1dbc764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC768u;
}
