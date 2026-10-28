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

// Function: sub_01C8E928
// Address: 0x1c8e928 - 0x1c8e9c0
void sub_01C8E928_0x1c8e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8E928_0x1c8e928");
#endif

    switch (ctx->pc) {
        case 0x1c8e94cu: goto label_1c8e94c;
        default: break;
    }

    ctx->pc = 0x1c8e928u;

    // 0x1c8e928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8e92c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8e930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8e930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8e934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8e938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8e938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e93c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c8e93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e940: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8e940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8e944: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8E944u;
    SET_GPR_U32(ctx, 31, 0x1C8E94Cu);
    ctx->pc = 0x1C8E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E944u;
    // 0x1c8e948: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8E944u, 0x1C8E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E94Cu;
label_1c8e94c:
    // 0x1c8e94c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c8e94cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8e950: 0x8c4c02b4  lw          $t4, 0x2B4($v0)
    ctx->pc = 0x1c8e950u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x1c8e954: 0xae2f05d4  sw          $t7, 0x5D4($s1)
    ctx->pc = 0x1c8e954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1492), GPR_U32(ctx, 15));
    // 0x1c8e958: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c8e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e95c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c8e95cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8e960: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x1c8e960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x1c8e964: 0xae2f05d8  sw          $t7, 0x5D8($s1)
    ctx->pc = 0x1c8e964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1496), GPR_U32(ctx, 15));
    // 0x1c8e968: 0xae2205d0  sw          $v0, 0x5D0($s1)
    ctx->pc = 0x1c8e968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1488), GPR_U32(ctx, 2));
    // 0x1c8e96c: 0x8e0f000c  lw          $t7, 0xC($s0)
    ctx->pc = 0x1c8e96cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8e970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8e970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8e974: 0xae2f05dc  sw          $t7, 0x5DC($s1)
    ctx->pc = 0x1c8e974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1500), GPR_U32(ctx, 15));
    // 0x1c8e978: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1c8e978u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8e97c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c8e97cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c8e980: 0x8e0d0020  lw          $t5, 0x20($s0)
    ctx->pc = 0x1c8e980u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c8e984: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c8e984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c8e988: 0xae2d05f0  sw          $t5, 0x5F0($s1)
    ctx->pc = 0x1c8e988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 13));
    // 0x1c8e98c: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1c8e98cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c8e990: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1c8e990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1c8e994: 0xae2c05e4  sw          $t4, 0x5E4($s1)
    ctx->pc = 0x1c8e994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 12));
    // 0x1c8e998: 0xae2f05f4  sw          $t7, 0x5F4($s1)
    ctx->pc = 0x1c8e998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 15));
    // 0x1c8e99c: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c8e99cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c8e9a0: 0xae2f05f8  sw          $t7, 0x5F8($s1)
    ctx->pc = 0x1c8e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 15));
    // 0x1c8e9a4: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c8e9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c8e9a8: 0xae2e05fc  sw          $t6, 0x5FC($s1)
    ctx->pc = 0x1c8e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 14));
    // 0x1c8e9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8e9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8e9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E9B4u;
        // 0x1c8e9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E9BCu;
    // 0x1c8e9bc: 0x0  nop
    ctx->pc = 0x1c8e9bcu;
    // NOP
    ctx->pc = 0x1c8e9c0u;
}
